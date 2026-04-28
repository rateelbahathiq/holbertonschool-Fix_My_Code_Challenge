#!/usr/bin/env ruby

ARGV.each do |arg|
  begin
    Integer(arg)
  rescue
    next
  end
end

ARGV.select { |arg| arg.match?(/\A-?\d+\z/) }
    .map(&:to_i)
    .sort
    .each { |num| puts num }
